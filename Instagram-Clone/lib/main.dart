import 'package:flutter/material.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const MaterialApp(
      debugShowCheckedModeBanner: false,
      home: MyWidget(),
    );
  }
}

class MyWidget extends StatelessWidget {
  const MyWidget({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      body: Center(
          child: Column(
        children: [
          Padding(
            padding: const EdgeInsets.all(8.0),
            child: text(),
          ),
        ],
      )),
    );
  }
}

class text extends StatelessWidget {
  const text({
    super.key,
  });

  @override
  Widget build(BuildContext context) {
    return Text("test",
        style: TextStyle(
          color: Colors.red,
        ));
  }
}
