const addon = require('./build/Release/addon.node');
console.log(`addon: ${JSON.stringify(addon)}`);
console.log(`log(2): ${addon.log(2)}`);
console.log(`exp(log(2)): ${addon.exp(addon.log(2))}`);

try {
    console.log(`addon.log('invalid'): ${addon.log('invalid')}`);
} catch (e) {
    console.log(e.message)
}
module.exports = addon;