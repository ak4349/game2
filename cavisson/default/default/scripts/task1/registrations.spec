nsl_static_var(username:1,password:2:E, File=.seq, Refresh=SESSION, Mode=SEQUENTIAL, EncodeMode=All);
nsl_random_number_var(card, Max=16, Format=%01lu, Refresh=SESSION);
nsl_web_find(TEXT/RE="Your reservation has been confirmed.", PAGE=findflight_3, FAIL=NOTFOUND, ID="text not found", ActionOnFail=STOP, Search_IN=ALL);
