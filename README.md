# MK's Audio Plugin Template

Adapted From: https://github.com/JanWilczek/audio-plugin-template

## Usage

This is a template repository which means you can right click "Use this template" on GitHub and create your own repo out of it.

After cloning it locally, you can proceed with the usual CMake workflow.

In the main repo directory execute

```bash
$ cmake -S . -B build
$ cmake --build build
```

The first run will take the most time because the dependencies (CPM, JUCE, and googletest) need to be downloaded.

Don't forget to change "YourPluginName" to, well, your plugin name everywhere
