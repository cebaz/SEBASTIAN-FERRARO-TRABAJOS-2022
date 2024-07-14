function agregarItem() {
  var item = document.createElement("li");
  item.textContent = "Nuevo producto";
  var carrito = document.getElementById("carrito");
  carrito.appendChild(item);
  alert("Producto agregado al carrito");
}

function vaciarCarrito() {
  var carrito = document.getElementById("carrito");
  while (carrito.firstChild) {
    carrito.removeChild(carrito.firstChild);
  }
  alert("El carrito ha sido vaciado");
}
