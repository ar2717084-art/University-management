export default function handler(req, res) {
    if (req.method === "POST") {
        const { creditHours } = req.body;
        return res.json({ fee: creditHours * 2500 });
    }

    res.status(405).end();
}
