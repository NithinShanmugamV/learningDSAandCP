
function reverseArray(n, arr){
    let start = 0;
    let last = n -1;
    let temp;
    while(start<last){
        temp = arr[start];
        arr[start] = arr[last];
        arr[last] = temp;
        start++;
        last--;
    }
}


var myLink = document.getElementById('reverseAnArray');

myLink.onclick = function(){
    var n = window.prompt("Enter number of elements in array ");
    var arr=[];
    for(var i=0;i<n;i++){
        arr[i] = window.prompt("Enter ",i,"th element of array :");
    }
    reverseArray(n, arr);
    window.alert(arr)

}