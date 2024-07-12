
// function init() {
//   document
//     .getElementById("square-form")
//     .addEventListener("submit", function (event) {
//       // Prevent the default form submission behavior
//       event.preventDefault();

//       // Call your calculateSquare function
//       calculateSquare();
//     });
// }


/**
 * Launches a full screen image of a blue screen of death.
 * Used in combo with the gamification of the calculator, to similate a crash.
 * (Sadly, I can't really command the computer to shut down from a browser window, which obviously would be 1000x funnier)
 *
 **/
function blueScreenOfDeath() {
  // console.log("dafuq");
  let body = document.getElementsByTagName("body")[0];

  // create an image tag with necessary specifications
  let bsod = document.createElement("img");
  bsod.src = "img/bsod.png";
  bsod.style.position = "absolute";
  bsod.style.top = "0";
  bsod.style.width = "100%";

  body.style.cursor = "none";

  body.appendChild(bsod);

  window.addEventListener("keydown", function (event) {
    // prevent default behaviour for a given key press (works okay-ish)
    // pretty much blocks everything except the `esc` key, so it's fine i *guess*
    event.preventDefault();
    return false;
  });

  body.requestFullscreen();

}



/**
 * When an element in the sidebar menu is clicked, the corresponding calculator 
 * is opened, and all other ones hidden.
 * 
 * @param {*} listElement Clickable element in the sidebar selection menu
 * @param {*} calculatorId ID of the calculator input form to be displayed
 */
function selectCalculator(listElement, calculatorId) {
  // select the correct element in the side bar
  const element = document.getElementById("sidebar-selected");
  if (element) {
    element.id = "";
  }
  listElement.id = "sidebar-selected";

  // hide all calculator inputs
  Array.from(document.getElementsByClassName("calculator")).forEach(
    (element) => {
      element.style.display = "none";
      clearForm(element.id); // clear the form as soon as the user clicks away
    }
  );

  // display only the correct calculator field as given by calculatorId
  document.getElementById(calculatorId).style.display = "grid";
}




//-----------------------------------------------------------------------------------------
//#section calculators

/**
 * Clears the form and hides the result of a given calculator.
 * 
 * @param {string} calculatorId Id of the calculator to clear
 */
function clearForm(calculatorId) {
  // clear the form of the given calculator
  // save the form object for usage in a later query selector
  const form = document.getElementById(calculatorId).querySelector("form");
  form.reset();
  try {
    // I'm doing some whack css selection stuff here which I don't even fully comprehend myself lol
    // Here the calculator id instead of the form id is needed
    document.querySelector(`#${calculatorId} p`).innerText = "";
    // since the result div is a sibling of the form, I can select it this way
    document.querySelector(`#${form.id} + .calculator-result`).style.display =
      "none";
    document.querySelector(`#${calculatorId} .submit-buttons`).style.display = "flex";
  } catch (error) {
    // why the hell does the stupid ?. operator not ducking work
  }
}

function displayResult(calculatorId, result) {
  // display the result
  document.querySelector(`#${calculatorId} p`).innerText = result;
  document.querySelector(`#${calculatorId} .calculator-result`).style.display =
    "block";
  document.querySelector(`#${calculatorId} .submit-buttons`).style.display = "none";
}


/**
 * Calculate the area of a square by the side length given to the form.
 * Note: Since I prevent the default form submit behaviour
 * 
 * @param {Event} event the submit event of the form
 */
function calculateSquare(event) {
  // Prevent the default form submission behaviour, which reloads the page,
  // resulting in the result never being displayed.
  event.preventDefault();

  const input = document.getElementById("square-form").querySelector("input").value;

  const area = input * input;

  // display the result
  displayResult("calculate-square", area);
}

/**
 * Calculate the area of a rectangle by the side lengths given to the form.
 * 
 * @param {Event} event the submit event of the form
 */
function calculateRectangle(event) {
  event.preventDefault();
  console.log('WHAT IN THE FUCKING CSS FUCK JAVASCRIPT')

  const length = document.getElementById("rect-length").value;
  const width = document.getElementById("rect-width").value;

  const area = length * width;

  // display the result
  displayResult("calculate-square", area);
}


