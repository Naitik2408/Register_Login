let register_user = document.getElementById("register_user");
let register_paddword = document.getElementById("register_password");
let login_user = document.getElementById("login_user");
let login_password = document.getElementById("login_password");
let button = document.getElementsByTagName("button");
console.log(button);
let User_name = [];
let Passwords = [];
button[0].addEventListener("click", () => {
  if (register_user.value === "") {
    alert("plese enter username");
  } 
  else if (register_paddword.value === "") {
    alert("plese enter password");
  } 
  else if(User_name.includes(register_user)){
    alert('this user name is not avbliable.')
  }
  else {
    User_name.push(register_user.value);
    Passwords.push(register_paddword.value);
    console.log(User_name);
    console.log(Passwords);
    alert('sucessfully registered')
  }
});
button[1].addEventListener('click',()=>{
    if(User_name.includes(login_user.value) && Passwords.includes(login_password.value) && User_name.indexOf(login_user.value)=== Passwords.indexOf(login_password.value)){
        alert('You have logged in to this account');
    }
    else if(login_user.value===''){
        alert('plese enter user name')
    }
    else if(login_password.value===''){
        alert('plese enter password')
    }
    else{
        alert('sorry, you have filled wrong details')
    }
    
})
