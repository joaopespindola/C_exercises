//Maintained by CSGO Betting Review

//Makeing a function that it will run every 10 sek
setInterval(function(){
    //Finding all objects on the site that has the tag 'button' (in other words all the buttons)
    var btn = document.getElementsByTagName('button');
    //Creating a for loop where i iterated true all the buttons found
    for(var i=0; i<btn.length; i++){
        //If the text on the button is 'Claim FREE Coins' the next 2 line of code will be executed.
        if(btn[i].innerText.indexOf('JOIN GIVEAWAY') > -1){
            //Clicking on the button that had the 'Claim FREE Coins' text.
            btn[i].click();
            //writing in the console that we claimed coins
            console.log('Claimed free coins');
        }
        if(btn[i].innerText.indexOf('JOIN DROP PARTY') > -1){
            //Clicking on the button that had the 'Claim FREE Coins' text.
            btn[i].click();
            //writing in the console that we claimed coins
            console.log('Claimed free coins');
        }

    }
    //Under here is the time out, its in ms (so 1000 is 1 secound).
},10000);

//Telling the script has started.
console.log('Script started');