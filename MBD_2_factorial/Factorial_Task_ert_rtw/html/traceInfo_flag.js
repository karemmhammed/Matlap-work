function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["Factorial_Task.c:78c41"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["Factorial_Task.c:77"]=1;
    this.lineTraceFlag["Factorial_Task.c:78"]=1;
    this.lineTraceFlag["Factorial_Task.c:80"]=1;
    this.lineTraceFlag["Factorial_Task.c:81"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
