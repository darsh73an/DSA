/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const res = [];  // const bcoz we will not reassign it

    for(let i=0; i<arr.length; i++){  // let bcoz we are reassigning it
        if(fn(arr[i], i)){
            res.push(arr[i]);
        }
    }
    return res;
};