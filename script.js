// [JavaScript](https://www.w3schools.com/js/js_functions.asp) Version
const personalFacts = [
    "An 18-year-old photography enthusiast who combines trekking adventures with capturing mountain views",
    "A bookworm who loves experimenting with cooking in their free time",
    "An avid traveler who finds happiness in long road trips and exploring new destinations"
];

function displayRandomFact() {
    const randomIndex = Math.floor(Math.random() * personalFacts.length);
    console.log(`Personal Fact: ${personalFacts[randomIndex]}`);
}

displayRandomFact();
