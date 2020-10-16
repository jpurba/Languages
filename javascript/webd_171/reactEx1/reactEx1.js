import React from 'react';
import ReactDOM from 'react-dom';
import Header from './Header';
import Content from './Content';
import Footer from './Footer';

function App() (
    <div className="app">
       <Header />
       <Content />
       <Footer />
    </div>
);

ReactDOM.render(
    <App />,
    document.getElementById("root")
);