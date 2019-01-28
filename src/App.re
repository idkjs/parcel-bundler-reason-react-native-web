open Utils;
open BsReactNative;
requireCSS("./App.css");

let component = ReasonReact.statelessComponent("App");

let make = (~name, _children) => {
  ...component,
  render: _self =>
    <View>
      <Text>
        {ReasonReact.string("Hello " ++ name ++ " from ReasonReact!")}
      </Text>
    </View>,
};