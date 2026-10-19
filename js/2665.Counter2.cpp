/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let current = init;

    return {
        increment: function(){
            return ++current;
        },
        decrement: function(){
            return --current;
        },
        reset: function(){
            current = init; // till here current will not be changed bcoz we did ++current
            return current;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */