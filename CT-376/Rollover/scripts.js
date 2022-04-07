document.getElementById("img1").onmouseover = function()
{
  mouseOver()
};
document.getElementById("img1").onmouseout = function()
{
  mouseOut()
};

function mouseOver()
    {
      document.getElementById('img1').src = "./moon.png";
      document.body.style.backgroundColor = "black";
    }

function mouseOut()
    {
      document.getElementById('img1').src = "./sun.png";
      document.body.style.backgroundColor = "white";
    }
