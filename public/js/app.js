let users = JSON.parse(localStorage.getItem("users")) || [];

function showLogin() {
    document.getElementById("loginBox").style.display = "block";
    document.getElementById("signupBox").style.display = "none";
}

function showSignup() {
    document.getElementById("loginBox").style.display = "none";
    document.getElementById("signupBox").style.display = "block";
}

// SIGNUP
function signup() {
    const user = {
        name: document.getElementById("signupName").value,
        email: document.getElementById("signupEmail").value,
        password: document.getElementById("signupPass").value,
        role: document.getElementById("signupRole").value
    };

    users.push(user);
    localStorage.setItem("users", JSON.stringify(users));

    alert("Account created!");
    showLogin();
}

// LOGIN
function login() {
    const email = document.getElementById("loginEmail").value;
    const pass = document.getElementById("loginPass").value;
    const role = document.getElementById("loginRole").value;

    const user = users.find(u =>
        u.email === email &&
        u.password === pass &&
        u.role === role
    );

    if (!user) {
        alert("Invalid login");
        return;
    }

    localStorage.setItem("currentUser", JSON.stringify(user));

    if (role === "admin") {
        window.location.href = "admin/dashboard.html";
    } else if (role === "faculty") {
        window.location.href = "faculty/dashboard.html";
    } else {
        window.location.href = "student/dashboard.html";
    }
}
