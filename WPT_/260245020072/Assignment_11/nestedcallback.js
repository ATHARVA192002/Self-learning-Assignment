function add(a, b, callback) {
    callback(null, "addition is " + (a + b));
}

function divide(a, b, callback) {
    setTimeout(() => {
        if (b == 0) {
            callback("error", null);
        } else {
            callback(null, "division: " + (a / b));
        }
    }, 1000);
}

function result(error, res) {
    if (error) {
        console.log(error);
    } else {
        console.log(res);
    }
}


add(2, 3, function (err, res) {
    result(err, res);

    divide(12, 3, function (err, res) {
        result(err, res);

        divide(12, 0, function (err, res) {
            result(err, res);
        });

    });

});