
//link: https://edabit.com/challenge/48EJWLhF224na8po3


let generationTable={
    m:{
       '0':'me',
        '1':'son',
        '2':'grandson',
        '3':'great grandson',
        '-1':'father',
        '-2':'grandfather',
        '-3':'great grandfather'

    },
    f:{
        '0':'me',
        '1':'daughter',
        '2':'granddaughter',
        '3':'great granddaughter',
        '-1':'mother',
        '-2':'grandmother',
        '-3':'great grandmother'

    }

};

console.log(generationTable['f']['2']);

//interesting solution

/* function generation(x,y) {
	const generations = {
		"-3": ["great grandfather",	"great grandmother"],
		"-2": ["grandfather",	"grandmother"],
		"-1": ["father", "mother"],
		 0: ["me!", "me!"],
		 1: ["son", "daughter"],
		 2: ["grandson",	"granddaughter"],
		 3: ["great grandson",	"great granddaughter"]
	}
	return generations[x][y === "m" ? 0 : 1]
} */