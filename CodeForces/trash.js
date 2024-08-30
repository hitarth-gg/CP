async function postData() {
    let i = 0;
    while (true) {
        console.log(i++);
       const res =  await fetch('https://cfcheatdetector.onrender.com/user', {
            method: 'POST',
            headers: {
                'Content-Type': 'application/json'
            },
            body: JSON.stringify({
                username: "_baelish"
            })
        })

        // log the response
        console.log(await res.text());
        

        // await new Promise(resolve => setTimeout(resolve, 100));
    }
}

postData();
