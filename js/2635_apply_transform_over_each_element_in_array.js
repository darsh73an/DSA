/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const res = []; // const bcoz we will not reassign it

    for(let i=0; i<arr.length; i++){ // let bcoz we are reassigning it
        res.push(fn(arr[i], i));
    }
    return res;
};