function checkCSolution(solution){
    let rowCount = solution.length;
    let colCount = solution[0].length;
    if(colCount !== 0){
        for(let i = 0; i < rowCount; i++){
            if(!checkDiff(solution[i])){
                return false;
            }
        }
    }

    if(rowCount !== 0){
        for(let i = 0; i < colCount; i++){
            let newArray = [];
            for(let j = 0; j < rowCount; j++){
                newArray.push(solution[j][i]);
            }
            if(!checkDiff(newArray)){
                return false;
            }
        }
    }
    return true;
}


function checkDiff(array){
    console.log(array);
    if(array.length === 1){
        return true;
    }
    let diff = array[1] - array[0];
    for(let i = 1; i < array.length; i++){
        if(array[i] - array[i-1] !== diff){
            return false;
        }
    }
    return true;
}

let a = [[0, 1], [1, 1], [2, 1]];
console.log(checkCSolution(a));
