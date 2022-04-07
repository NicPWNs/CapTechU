var s = "";
var dayval=1;
var offsetMth = 0;
var offsetYr = 0;
var curDay = 0;

function calendarMove(month, year)
{
  offsetMth += month;
  offsetYr += year;

  if (month == 0 && year == 0)
  {
    mth = today.getMonth();
    yr = today.getFullYear();
    offsetMth = 0;
    offsetYr = 0;
  }

  if (offsetMth == 12)
  {
    offsetMth = 0;
    offsetYr += 1;
  }
  else if (offsetMth == -12)
  {
    offsetMth = 0;
    offsetYr -= 1;
  }

  mth += offsetMth;

  if (mth > 11)
  {
    mth = 0;
    yr += 1;
  }
  else if (mth < 0)
  {
    mth = 11;
    yr -= 1;
  }

  calendar(mth,yr+offsetYr)
  offsetMth = 0;
}

function calendar(cmnth, cyr)
{
  s = "";
  dayval = 1;
  firstday = new Date(cyr,cmnth,1);
  fdval = firstday.getDay();
  mdays[1] = (((cyr%100!=0)&&(cyr%4==0))||(cyr%400==0))?29:28;
  mthdays = mdays[mth];
  ttlday = fdval + mthdays;
  curDay = fdval;
  numrows = parseInt(ttlday / 7) + 1;
  if (ttlday & 7 != 0)
  {
    numrows = numrows + 1;
  }
  s+= '<table>';
  calHead(cyr,cmnth);
  dayHead();
  firstRow(fdval);

  for (i=1; i<numrows; i++)
  {
    putRow();
  }
  s+="</table>";

  document.getElementById("calendar").innerHTML=s;
}

function firstRow(fdval)
{
  s+= "<tr>";
  for (x=1; x<fdval+1; x++)
  {
    s+="<td class='blank'></td>";
  }
  for (z=x; z<8; z++)
  {
    putCell();
  }
  s+="</tr>";
}

function putRow()
{
  s+="<tr>";
  for (j=1; j<8; j++)
  {
    putCell();
  }
  s+="</tr>";
}

function putCell()
{
  s+="<td ";
  if (curDay == 6 || curDay == 0)
  {
    s+=" class='weekend'"
  }
  if (dayval > mthdays)
  {
    s+=" class='blank'>";
  }
  else if (DOM == dayval && MTH == mth && YR == yr+offsetYr)
  {
    s+=" class='today'>";
    s+=dayval;
  }
  else
  {
    s+=" >";
    s+=dayval;
  }
  s+="</td>";
  dayval++;
  curDay++;
  if (curDay > 6)
  {
    curDay = 0;
  }
}
function dayHead()
{
  s+="<tr>";
  s+="<td>S</td>";
  s+="<td>M</td>";
  s+="<td>T</td>";
  s+="<td>W</td>";
  s+="<td>T</td>";
  s+="<td>F</td>";
  s+="<td>S</td>";
  s+="</tr>";
}

function shortDate()
{
  sd = "";
  sd += today.getMonth() + 1;
  sd += "/";
  sd += today.getDate();
  sd += "/";
  sd += today.getFullYear();
  document.getElementById("thisdate").innerHTML = sd;
}

function calHead(cyr,cmnth)
{
  s += "<tr>";
  s += "<td colspan='7' id='calhead'>" + mname[cmnth] + " " + cyr + "</td>";
  s += "</tr>";
}
