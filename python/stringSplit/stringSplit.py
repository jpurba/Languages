tweet = "RT @j_o_n_dnger : $TWTR now top holding for Andor, unseating $AAPL"
words_in_tweet = tweet.split(' ') # list of words in tweet

for word in words_in_tweet:                 # for each word in list
    if "$" in word:                         # if word has a "cashtag"
        print("This TWEET is about", word)  # alert the user