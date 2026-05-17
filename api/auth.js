export default function handler(req, res) {
    const { email, password } = req.body;

    if (email === "admin@uni.com" && password === "1234") {
        return res.json({
            token: "secure-token",
            role: "admin"
        });
    }

    return res.status(401).json({ message: "Invalid login" });
}
