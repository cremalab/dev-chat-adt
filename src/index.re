[%bs.raw {|require('./index.css')|}];

module App = {
  let component = ReasonReact.statelessComponent("App");

  let make = (~s: string, _children) => {
    ...component,
    render: _self =>
      <div className="App">
        <pre> (ReasonReact.string(s)) </pre>
        <p> (ReasonReact.string("Hi folks")) </p>
      </div>,
  };
};

Tree.myTree |> Js.log;

ReactDOMRe.renderToElementWithId(<App s=D.result />, "root");