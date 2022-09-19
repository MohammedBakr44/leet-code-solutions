/**
 * @param {character[][]} board
 * @return {boolean}
 */
var isValidSudoku = function(board) {
    let rows = new Set();
    let cols = new Set();
    let sq   = new Set();
    for(let i = 0; i < 9; i++) {
        for(let j = 0; j < 9; j++) {
            let rowVal = board[i][j];
            let colVal = board[j][i];
            let boxRow = 3 * Math.floor(i / 3) + Math.floor(j / 3);
            let boxCol = 3 * Math.floor(i % 3) + Math.floor(j % 3);
            let sqVal = board[boxRow][boxCol];
            if(rows.has(rowVal) || cols.has(colVal) || sq.has(sqVal)) return false;
            else {
                rowVal !== '.' && rows.add(rowVal);
                colVal !== '.' && cols.add(colVal);
                sqVal !== '.' && sq.add(sqVal);
            }

    }
            rows.clear();
            cols.clear();
            sq.clear();
}
    return true;
};