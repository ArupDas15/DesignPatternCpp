# Adaptur Structural Design Pattern
Adapter structural design pattern converts the interface of a class into another interface clients expects. Adpater lets classes work together that could not otherwise because of incompatible interfaces. 

**Problem Description**:
We have an XML Data and we want to analyse this data. We have a data analytics tool but this tool requires the input data to be in JSON format. We are going to use an adapter class, convert the XML data to JSON and feed it to the tool. However, while doing so, it is important that the client does not realise that there is an adapter in between.

# How do I run the code and code output

```
DesignPatternCpp\AdapterDesignPattern> g++ -o adapter_demo adapter_demo.cpp
DesignPatternCpp\AdapterDesignPattern> .\adapter_demo    
```

**OUTPUT**:
```
Converting XML Data "Sample XML Data" to JSON Data
Analysing the converted JSON Data
Analysing Data
```
