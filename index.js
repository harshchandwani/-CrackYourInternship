let a = 10; 

let b = 20; 

let c = 0; 

let d = 40; 

let e = 34;

let f  = 45;

let txt = ''; 

if(a>b && a>c && a>c && a>d && a>e && a>f){ 

    txt = 'a is the largest no'; 

}else if(b>a && b>c && b>d && b>e && b>f){ 

    txt = 'b is the largest no'; 

}else if(c>a && c>b && c>d && c>e && c>f){ 

    txt = 'c is the largest no'; 

}else if(d>a && d>b && d>c && d>e && d>f){ 

    txt = 'd is the largest no'; 

}else if(e>a && e>b && e>c && e>d && e>f) {
    txt = 'e is the largest no.';

}else if(f>a && f>b && f>c && f>d && f>e){
    txt = 'f is the largest no.';
}else{ 

    txt = 'enter a valid number;' 

} 

document.getElementById('head').innerHTML = txt