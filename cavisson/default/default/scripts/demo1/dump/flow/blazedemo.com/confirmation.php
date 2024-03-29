<!doctype html>
<html lang="en">
<head>
    <meta charset="utf-8">
    <title>BlazeDemo Confirmation</title>
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
        <div class="container hero-unit">
        <h1>Thank you for your purchase today!</h1>
        <table class="table">
            <thead>
            <tr>
                <th>&nbsp;</th>
                <th>&nbsp;</th>
            </tr>
            </thead>
            <tbody>
                            <tr>
                    <td>Id</td>
                    <td>1630484169689</td>
                </tr>
                <tr>
                    <td>Status</td>
                    <td>PendingCapture</td>
                </tr>
                <tr>
                    <td>Amount</td>
                    <td>555 USD</td>
                </tr>
                <tr>
                    <td>Card Number</td>
                    <td>xxxxxxxxxxxx1111</td>
                </tr>
                <tr>
                    <td>Expiration</td>
                    <td>11
                        /2018</td>
                </tr>
                <tr>
                    <td>Auth Code</td>
                    <td>888888</td>
                </tr>
                                    <tr>
                <td>Date</td>
                <td>Wed, 01 Sep 2021 08:16:09 +0000</td>
            </tr>
            </tbody>
        </table>
        <br/>
        <pre>
{
    &quot;id&quot;: &quot;1630484169689&quot;,
    &quot;status&quot;: &quot;PendingCapture&quot;,
    &quot;amount&quot;: &quot;555&quot;,
    &quot;currency&quot;: &quot;USD&quot;,
    &quot;authCode&quot;: &quot;888888&quot;,
    &quot;payment&quot;: {
        &quot;cardNumber&quot;: &quot;xxxxxxxxxxxx1111&quot;,
        &quot;cardExpirationMonth&quot;: &quot;11&quot;,
        &quot;cardExpirationYear&quot;: &quot;2018&quot;
    },
    &quot;_links&quot;: {
        &quot;self&quot;: {
            &quot;href&quot;: &quot;https=&gt;\/\/sandbox.api.visa.com\/cybersource\/payments\/v1\/authorizations\/1630484169689&quot;,
            &quot;method&quot;: &quot;GET&quot;
        },
        &quot;capture&quot;: [
            {
                &quot;href&quot;: &quot;https=&gt;\/\/sandbox.api.visa.com\/cybersource\/payments\/v1\/authorizations\/1630484169689\/captures&quot;,
                &quot;method&quot;: &quot;POST&quot;
            }
        ],
        &quot;reversal&quot;: [
            {
                &quot;href&quot;: &quot;https=&gt;\/\/sandbox.api.visa.com\/cybersource\/payments\/v1\/authorizations\/1630484169689\/reversals&quot;,
                &quot;method&quot;: &quot;POST&quot;
            }
        ]
    }
}
</pre>
        <br/>
    </div>
</div>
</body>
</html>
