let students = [];

export default function handler(req, res) {
    if (req.method === "GET") {
        return res.json(students);
    }

    if (req.method === "POST") {
        students.push(req.body);
        return res.json({ message: "Student added" });
    }

    res.status(405).end();
}
