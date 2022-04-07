function oButton(op)
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = dis + op;
}

function sqrtButton()
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = Math.sqrt(dis);
}

function sqButton()
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = dis * dis;
}

function piButton()
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = dis + Math.PI;
}

function mButton(mstr)
{
  switch(mstr)
  {
    case 'M' :
    {
      equals()
      document.getElementById("memdis").value = document.getElementById("dis").value;
      break;
    }
    case 'C' :
    {
      document.getElementById("memdis").value = "";
      break;
    }
    case 'R' :
    {
      document.getElementById("dis").value = "";
      document.getElementById("dis").value = document.getElementById("memdis").value;
      break;
    }
  }
}

function nButton(num)
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = dis + num;
}

function clearDisplay()
{
  document.getElementById("dis").value = "";
}

function backspace()
{
  var dis = document.getElementById("dis").value;
  document.getElementById("dis").value = dis.slice(0, -1);
}

function hideTape()
{
  var checkBox = document.getElementById("checkbx");
  var mem = document.getElementById("memory");

  if (checkBox.checked == false){
    mem.style.display = "block";
  } else {
    mem.style.display = "none";
  }
}

function equals()
{
  var dis = document.getElementById("dis").value;
  if (document.getElementById("dis").value == "")
  {
    document.getElementById("dis").value = "";
  }
  else if (dis.includes("/0"))
  {
    alert("Cannot divide by zero.")
  }
  else
  {
    var result = eval(dis);
    document.getElementById("memtape").value += dis + " = " + result + "\n";
    document.getElementById("dis").value = result;
  }
}
