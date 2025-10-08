

// Flipkart Clone - Basic JavaScript Functions

// Simulate Login Button Click
document.addEventListener('DOMContentLoaded', function () {
    const loginBtn = document.querySelector('.login');
    if (loginBtn) {
        loginBtn.addEventListener('click', () => {
            alert('Login feature is coming soon!');
        });
    }

    // Placeholder for search interaction
    const searchInput = document.querySelector('.navbar input');
    if (searchInput) {
        searchInput.addEventListener('input', () => {
            console.log('Searching for:', searchInput.value);
        });
    }

    // Example: Add-to-cart alert (if you add buttons later)
    const productCards = document.querySelectorAll('.product-card');
    productCards.forEach((card) => {
        card.addEventListener('click', () => {
            const productName = card.querySelector('h4').innerText;
            alert(productName + ' added to cart!');
        });
    });
});