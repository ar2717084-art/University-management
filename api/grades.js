export default function handler(req, res) {
    if (req.method === "POST") {
        const { marks } = req.body;
        const avg = marks.reduce((a,b)=>a+b,0)/marks.length;
        const gpa = (avg / 25).toFixed(2);

        return res.json({ gpa });
    }

    res.status(405).end();
}
