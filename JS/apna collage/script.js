// //..................Array.......................

// let arr = ["Ram","Sita","Moham","Geeta","Raju"];
// console.log(arr);
// console.log(arr[4]);
// console.log(arr.length);


// arr[10]="ramu";
// console.log(arr[10]);//[5],[6].....[9] is empty space
// console.log(arr.length);



// //...............Array Methods......................

// // 1. Push : add to end  , 2.  Pop : Delete from end & returns it
// // 3. Shift : Delete from start & return it , 4. Unshift : add to start

// let fruits = ["apple","orange","banana"];
// console.log(fruits);
// // 1.
// fruits.push("grapes");//element add from last
// console.log(fruits);
// // 2.
// fruits.pop();//elementa delete from last,,,not need to mention element in pop method
// console.log(fruits);
// // 3.
// fruits.unshift("guava");//elementa add from start
// console.log(fruits);
// // 4.
// fruits.shift();//elements delete from start
// console.log(fruits);


// // Practice Question  : start :['january','july','march','august']
// //                      final :['july','june','march','august']

// let month = ['january','july','march','august'];

// month.shift();
// month.shift();
// month.unshift("july");
// month.unshift("june");

// console.log(month)


// // 5. indexof

// fruits.indexOf("apple");//output = 0

// // 6 . concat 

// let primary_color = ["red","yellow","blue"];
// let secondary_color = ["orange","green","voilet"];

// let final_color = primary_color.concat(secondary_color);
// console.log(final_color);

// // reverse

// // final_color.reverse();
// // console.log(final_color);

// primary_color.reverse();
// console.log(primary_color);


// // 7. slice : copies a portion of an array

// let color = ['red', 'yellow', 'blue', 'orange', 'green', 'voilet'];

//             color.slice();
// let abc =   color.slice(4);
//             color.slice(2,5);
//             color.slice(2,color.length-1);

// console.log(abc);

// // 8. splice : remove / replece / add elements in place splice ( start,deleteCount,item0....itemN).

// let sp1 = color.splice(4);
//             color.splice(1,4);
//  let sp2 =  color.splice(0,1.,"blue","green");
// console.log(sp1);
// console.log(sp2);


// //.....................loop...............

// //  1. for-loop

// //  syntex :   for(initia.. : condition : updation){

// //                              Code....
// //                         }


for(let i=1; i<=10; i=i+2){
    console.log(i);
}


let hed = document.getElementsByTagName("h1");
h = new style