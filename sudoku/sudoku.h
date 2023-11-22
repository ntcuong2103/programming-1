#define BOARD_SIZE 9

struct Cell_impl
{
    int candidate[BOARD_SIZE];
};

typedef struct Cell_impl Cell;

struct SudokuBoard_impl
{
    Cell** data; // 9x9 cell board
    Cell** rows[BOARD_SIZE]; // rows pointers
    Cell** cols[BOARD_SIZE]; // cols pointers
    Cell** boxes[BOARD_SIZE]; // boxes pointers
};

typedef struct SudokuBoard_impl SudokuBoard;

void init_sudoku(SudokuBoard* boardRef);
void load_sudoku(SudokuBoard* boardRef, char* textData);
void apply_constraint(Cell** constraint, int value);
void refine_candidate(SudokuBoard* boardRef);
void print_candidate_num(SudokuBoard* boardRef);
void print_solution(SudokuBoard* boardRef);


void set_candidate(Cell* cell, int value);
void unset_candidate(Cell* cell, int value);
void set_candidates(Cell* cell, int* candidates, int size);
int* get_candidates(Cell* cell);
int num_candidates(Cell* cell);
