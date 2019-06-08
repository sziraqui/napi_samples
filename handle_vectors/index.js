const addon = require('./build/Release/addon.node');

const str = (["abcd", "efg", "hijk"]);
// addon.printArray(str);
// 2d array
const mat = [
    [2,3,4,5],
    [1,2,4,5],
    [2,3,5,1],
    [4,6,3,9]
];
addon.print2dArray(mat);
