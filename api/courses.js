let courses = [];

export default function handler(req, res) {
    if (req.method === "GET") return res.json(courses);

    if (req.method === "POST") {
        courses.push(req.body);
        return res.json({ message: "Course added" });
    }

    res.status(405).end();
}
