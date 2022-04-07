var myGamePiece;
var myGamePiece2;

function startGame() 
{
    myGamePiece = new component(30, 30, "red", 10, 125);
    myGamePiece2 = new componentArc(940, 125, "blue", 15, 0, 2 * Math.PI);
    myGameArea.start();
}

var myGameArea = {
    canvas : document.createElement("canvas"),
    start : function() 
    {
        this.canvas.width =1000;
        this.canvas.height = 250;
        this.context = this.canvas.getContext("2d");
        document.body.insertBefore(this.canvas, document.body.childNodes[0]);
        this.interval = setInterval(updateGameArea, 10);
        window.addEventListener('keydown', function (e) 
        {
      myGameArea.key = e.keyCode;
    })
    window.addEventListener('keyup', function (e) 
    {
      myGameArea.key = false;
    })
    },
    clear : function() 
    {
        this.context.clearRect(0, 0, this.canvas.width, this.canvas.height);
    }
}

function component(width, height, color, x, y) 
{
    this.width = width;
    this.height = height;
    this.speedX = 0;
    this.speedY = 0;
    this.x = x;
    this.y = y;    
    this.update = function() 
    {
        ctx = myGameArea.context;
        ctx.fillStyle = color;
        ctx.fillRect(this.x, this.y, this.width, this.height);
    }
    this.newPos = function() 
    {
        this.x += this.speedX;
        this.y += this.speedY;        
    }    
}

function componentArc(x, y, color, r, sAngle, eAngle) 
{
    this.sAngle = sAngle;
    this.eAngle = eAngle;
    this.speedX = 0;
    this.speedY = 0;
    this.x = x;
    this.y = y;
    this.r = r;    
    this.update = function() 
    {
        ctx = myGameArea.context;
        ctx.beginPath();
        ctx.fillStyle = color;
        ctx.arc(this.x, this.y, this.r, this.sAngle, this.eAngle);
        ctx.closePath();
        ctx.fill();
    }
    this.newPos = function() 
    {
        this.x += this.speedX;
        this.y += this.speedY;        
    }    
}

function updateGameArea() 
{
    myGameArea.clear();
    if (myGameArea.key && myGameArea.key == 65) {myGamePiece.speedX = -1; }
    if (myGameArea.key && myGameArea.key == 68) {myGamePiece.speedX = 1; }
    if (myGameArea.key && myGameArea.key == 87) {myGamePiece.speedY = -1; }
    if (myGameArea.key && myGameArea.key == 83) {myGamePiece.speedY = 1; }
    myGamePiece.newPos();    
    myGamePiece.update();
    if (myGameArea.key && myGameArea.key == 37) {myGamePiece2.speedX = -1; }
    if (myGameArea.key && myGameArea.key == 39) {myGamePiece2.speedX = 1; }
    if (myGameArea.key && myGameArea.key == 38) {myGamePiece2.speedY = -1; }
    if (myGameArea.key && myGameArea.key == 40) {myGamePiece2.speedY = 1; }
    myGamePiece2.newPos();    
    myGamePiece2.update();
}

function moveup() 
{
    myGamePiece.speedY -= 1; 
}

function movedown() 
{
    myGamePiece.speedY += 1; 
}

function moveleft() 
{
    myGamePiece.speedX -= 1; 
}

function moveright() 
{
    myGamePiece.speedX += 1; 
}

function moveup2() 
{
    myGamePiece2.speedY -= 1; 
}

function movedown2() 
{
    myGamePiece2.speedY += 1; 
}

function moveleft2() 
{
    myGamePiece2.speedX -= 1; 
}

function moveright2() 
{
    myGamePiece2.speedX += 1; 
}
