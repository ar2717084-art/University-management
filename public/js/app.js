async function login() {
    const email = document.getElementById("email").value;
    const password = document.getElementById("pass").value;

    const res = await fetch("/api/auth", {
        method: "POST",
        headers: {"Content-Type":"application/json"},
        body: JSON.stringify({ email, password })
    });

    const data = await res.json();

    if (data.token) {
        alert("Login success");
        window.location.href = "student/dashboard.html";
    } else {
        alert("Login failed");
    }
}
