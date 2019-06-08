const addon = require('./build/Release/addon.node');

const a = [1,2,3,4,5];
addon.printArray(a);
// 2d array
const mat = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
];
addon.print2dArray(mat);
addon.zerofy(mat);
console.log('After zerofy');
addon.print2dArray(mat);
