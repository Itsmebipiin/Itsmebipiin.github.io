let particles = [];

function setup() {
  createCanvas(600, 400);
  angleMode(RADIANS);
}

function draw() {
  background(0);

  // Create new particle at center
  let p = new Particle(createVector(width / 2, height / 2));
  particles.push(p);

  // Run all particles
  for (let i = particles.length - 1; i >= 0; i--) {
    particles[i].run();
    if (particles[i].isDead()) {
      particles.splice(i, 1);
    }
  }
}

function Particle(position) {
  this.acceleration = createVector(0, 0.05);
  this.velocity = createVector(random(-1, 1), random(-1, 0));
  this.position = position.copy();
  this.lifespan = 255.0;

  this.update = function () {
    this.velocity.add(this.acceleration);
    this.position.add(this.velocity);
    this.lifespan -= 2;
  };

  this.display = function () {
    stroke(255, this.lifespan);
    strokeWeight(2);
    fill(255, this.lifespan);
    ellipse(this.position.x, this.position.y, 12);
  };

  this.isDead = function () {
    return this.lifespan < 0;
  };

  this.run = function () {
    this.update();
    this.display();
  };
}