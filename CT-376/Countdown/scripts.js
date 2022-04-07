function showdates()
{
  var d = new Date();
  var ny = d.getFullYear()+1;
  var nd = new Date(ny,0,1);
  var tf = new Date(nd).getTime();
  var cd = tf - d;
  var days = Math.floor(cd / (86400000));
  var hours = Math.floor((cd % (86400000)) / (3600000));
  var mins = Math.floor((cd % (3600000)) / (60000));
  var secs = Math.floor((cd % (60000)) / 1000);

  s = "<b>Todays Date: </b>";
  s+=d;
  s+="<br />";
  s+="<br />";
  s+="<b>New Year: </b>";
  s+=nd;
  s+="<br />";
  s+="<br />";
  s+="<b>Time Until: </b>";
  s+= days + "d " + hours + "h " + mins + "m " + secs + "s ";;
  document.getElementById("countdown").innerHTML = s;
}
