const addon = require('./build/Release/classAddon.node');
console.log(`addon: ${addon}`);
let elog = new addon.Elog(2); // value = 2
console.log(`elog: ${elog}`); 
console.log(`elog.Log(): ${elog.log()}`); // value = 0.6931471805599453
console.log(`elog.exp(): ${elog.exp()}`); // value = 2
