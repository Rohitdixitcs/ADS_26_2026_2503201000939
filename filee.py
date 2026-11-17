const express=require('express');
const app = express();
let students = [
    { id: 1,name: 'Rahul', branch: 'CSE', age:20},
    { id: 2,name: 'Anuj', branch: 'CSE', age:21},
    { id:3 ,name: 'Priya', branch: 'CSE', age:20},
    [ id:4 ,name: 'Neha', branch: 'CSE', age:21},
];
app.get('/')