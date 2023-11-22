#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "sudoku.h"

void init_sudoku(SudokuBoard* boardRef)
{
    boardRef->data = malloc(BOARD_SIZE * sizeof(Cell*));
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        boardRef->data[i] = malloc(BOARD_SIZE * sizeof(Cell));
    }

    // assign rows, cols, boxes
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        boardRef->rows[i] = malloc(BOARD_SIZE * sizeof(Cell*));
        boardRef->cols[i] = malloc(BOARD_SIZE * sizeof(Cell*));
        boardRef->boxes[i] = malloc(BOARD_SIZE * sizeof(Cell*));

        for (int j = 0; j < BOARD_SIZE; j++)
        {
            boardRef->rows[i][j] = &boardRef->data[i][j];
            boardRef->cols[i][j] = &boardRef->data[j][i];
            boardRef->boxes[i][j] = &boardRef->data[(i / 3) * 3 + j / 3][(i % 3) * 3 + j % 3];
        }
    }
}

void set_candidate(Cell* cell, int value)
{
    cell->candidate[value - 1] = 1;
}

void unset_candidate(Cell* cell, int value)
{
    cell->candidate[value - 1] = 0;
}

void set_candidates(Cell* cell, int* candidates, int size)
{
    for (int i = 0; i < size; i++)
    {
        set_candidate(cell, candidates[i]);
    }
}

int* get_candidates(Cell* cell)
{
    int* out = malloc(num_candidates(cell) * sizeof(int));
    int counter = 0;
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (cell->candidate[i])
        {
            out[counter++] = i + 1;
        }
    }
    return out;
}

int num_candidates(Cell* cell)
{
    int num = 0;
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        num += cell->candidate[i];
    }
    return num;
}

void load_sudoku(SudokuBoard* boardRef, char* textData)
{
    for (int i = 0; i < BOARD_SIZE * BOARD_SIZE; i++)
    {
        if (textData[i] - '0')
        {
            set_candidate(&(boardRef->data[i / BOARD_SIZE][i % BOARD_SIZE]), textData[i] - '0');
        }
        else
        {
            int candidates[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
            set_candidates(&(boardRef->data[i / BOARD_SIZE][i % BOARD_SIZE]), candidates, BOARD_SIZE);
        }
    }
}

void apply_constraint(Cell** constraint, int value)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        if (num_candidates(constraint[i]) > 1)
        {
            unset_candidate(constraint[i], value);
        }
    }
}

void refine_candidate(SudokuBoard* boardRef)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            if (num_candidates(&boardRef->data[i][j]) == 1)
            {
                int* out = get_candidates(&boardRef->data[i][j]);
                // apply constraint
                apply_constraint(boardRef->rows[i], out[0]);
                apply_constraint(boardRef->cols[j], out[0]);
                apply_constraint(boardRef->boxes[(i / 3) * 3 + j / 3], out[0]);

                free(out);
            }
        }
    }
}

void print_candidate_num(SudokuBoard* boardRef)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            printf("%d ", num_candidates(&boardRef->data[i][j]));
        }
        printf("\n");
    }
}

void print_solution(SudokuBoard* boardRef)
{
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            assert(num_candidates(&boardRef->data[i][j]) == 1);
            int* out = get_candidates(&boardRef->data[i][j]);
            printf("%d ", out[0]);
            free(out);
        }
        printf("\n");
    }
}

int main()
{
    char* sudoku_text = "000105000140000670080002400063070010900000003010090520007200080026000035000409000";
    SudokuBoard* board = malloc(sizeof(SudokuBoard));
    init_sudoku(board);
    load_sudoku(board, sudoku_text);
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    printf("\n");
    refine_candidate(board);
    print_candidate_num(board);
    print_solution(board);
    return 0;
}