var years= [1990,1995,2000,2014,1973];

function printFullAge(years){
    var ages = [];
    var fullAges = [];
    for(var i=0; i < years.length; i++ )
    {
        ages[i]= 2018-years[i];
    }

    for(var i=0; i < ages.length; i++)
    {
        if(ages[i] >= 18)
        {
            console.log('Person is ' + ages[i] + 'years old: Full Age');
            fullAges.push(true);
        }
        else{
            console.log('Person is ' + ages[i] + 'years old: NOT Full Age');
            fullAges.push(false);
        }

    }
    return fullAges;
} 

