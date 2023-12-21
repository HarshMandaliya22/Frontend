function h(TagId) {
    let hm = document.getElementById(TagId);
    return hm;
}
let log = (msg1, msg2 = 'not given', msg3 = 'not given') => {
    console.log(msg1, msg2, msg3);
}
let int = (num) => parseInt(num);
let float = (num) => parseFloat(num);