<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>BlazeDemo Purchase</title>
    <meta name="description" content="BlazeMeter demo app">
    <meta name="sage" content="flights app">

    <script src="./../ajax.googleapis.com/ajax/libs/jquery/2.0.0/jquery.min.js"></script>
    <script src="./../blazedemo.com/assets/bootstrap.min.js"></script>
    <script src="./../blazedemo.com/assets/bootstrap-table.js"></script>
    <link href="./../blazedemo.com/assets/bootstrap.min.css" rel="stylesheet" media="screen">
    <link href="./../blazedemo.com/assets/bootstrap-table.css" rel="stylesheet" media="screen">
    <style type="text/css">
        body {
            background: #f5f5f5);
        }

        .hero-unit {
            background-color: #fff;
        }

        .center {
            display: block;
            margin: 0 auto;
        }
    </style>
</head>
<body>
    <div class="navbar navbar-inverse">
        <div class="navbar-inner">
            <div class="container">
                <a class="btn btn-navbar" data-toggle="collapse" data-target=".nav-collapse">
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                    <span class="icon-bar"></span>
                </a>
                <a class="brand" href="index.php">Travel The World</a>
                <a class="brand" href="home">home</a>
            </div>
        </div>
    </div>
<div class="container">
            <h2>Your flight from TLV to SFO has been reserved.</h2>
    <p>Airline: United</p>
    <p>Flight Number: UA954</p>
    <p>Price: 400</p>
    <p>Arbitrary Fees and Taxes: 514.76</p>
    <hr></hr>
    <p>Total Cost: <em>914.76 </em></p>
    <p>Please submit the form below to purchase the flight.</p>

    <form method="POST" action="https://blazedemo.com/confirmation.php" accept-charset="UTF-8"><input name="_token" type="hidden">
    <div class="control-group">
        <label class="control-label" for="inputName">Name</label>
        <div class="controls">
            <input id="inputName" placeholder="First Last" name="inputName" type="text">
        </div>
    </div>
    <div class="control-group">
        <label class="control-label" for="address">Address</label>
        <div class="controls">
            <input type="text" name="address" id="address" placeholder="123 Main St.">
        </div>
    </div>
    <div class="control-group">
        <label class="control-label" for="city">City</label>
        <div class="controls">
            <input type="text" name="city" id="city" placeholder="Anytown">
        </div>
    </div>
    <div class="control-group">
        <label class="control-label" for="state">State</label>
        <div class="controls">
            <input type="text" name="state" id="state" placeholder="State">
        </div>
    </div>
    <div class="control-group">
        <label class="control-label" for="zipCode">Zip Code</label>
        <div class="controls">
            <input type="text" name="zipCode" id="zipCode" placeholder="12345">
        </div>
    </div>

    <div class="control-group">
        <label class="control-label" for="creditCardType">Card Type</label>
        <div class="controls">
            <select class="form-inline" name="cardType" id="cardType">
                <option value="visa">Visa</option>
                <option value="amex">American Express</option>
                <option value="dinersclub">Diner's Club</option>
            </select>
        </div>
    </div>

    <div class="control-group">
        <label class="control-label" for="creditCardNumber">Credit Card Number</label>
        <div class="controls">
            <input type="text" id="creditCardNumber" name="creditCardNumber" placeholder="Credit Card Number">
        </div>
    </div>

    <div class="control-group">
        <label class="control-label" for="creditCardMonth">Month</label>
        <div class="controls">
            <input type="text" id="creditCardMonth" name="creditCardMonth" placeholder="Month" value="11">
        </div>
    </div>

    <div class="control-group">
        <label class="control-label" for="creditCardYear">Year</label>
        <div class="controls">
            <input type="text" id="creditCardYear" name="creditCardYear" placeholder="Year" value="2017">
        </div>
    </div>

    <div class="control-group">
        <label class="control-label" for="nameOnCard">Name on Card</label>
        <div class="controls">
            <input type="text" id="nameOnCard" placeholder="John Smith" name="nameOnCard">
        </div>
    </div>


    <div class="control-group">
        <div class="controls">
            <label class="checkbox">
                <input type="checkbox" name="rememberMe" id="rememberMe"> Remember me
            </label>
            <input class="btn btn-primary" type="submit" value="Purchase Flight">
        </div>
    </div>
    </form>
    
</div>
</body>
</html>
