let inputsearchEl = document.querySelector(".inputsearch")

// console.log(inputsearchEl)

inputsearchEl.addEventListener("keydown", () => {
    // console.log(inputsearchEl);
    if (inputsearchEl.value) {
        document.getElementById("closesearch").style.display = "block"
    }
    else {
        document.getElementById("closesearch").style.display = "none"
    }
})








