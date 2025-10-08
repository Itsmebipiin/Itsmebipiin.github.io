function setup() {
    createCanvas(600, 400);
    angleMode(RADIANS);
  
    // Create a particle at center
    p = new Particle(createVector(width / 2, height / 2));
  }
  
  function draw() {
    background(0);
    p.run();
  }
  
  // Particle class
  var Particle = function(position) {
    this.acceleration = createVector(0, 0.05);
    this.velocity = createVector(random(-1, 1), random(0, -1));
    this.position = position.copy();  // same as position.get() in Processing
    this.timeLive = 255.0;
  };
  
  Particle.prototype.run = function() {
    this.update();
    this.display();
  };
  
  Particle.prototype.update = function() {
    this.velocity.add(this.acceleration);
    this.position.add(this.velocity);
    this.timeLive -= 2.0;
  };
  
  Particle.prototype.display = function() {
    noStroke();
    fill(255, this.timeLive);
    ellipse(this.position.x, this.position.y, 12, 12);
  };