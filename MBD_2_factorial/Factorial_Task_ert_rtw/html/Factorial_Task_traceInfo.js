function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Factorial_Task"};
	this.sidHashMap["Factorial_Task"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Factorial_Task:1"};
	this.sidHashMap["Factorial_Task:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "Factorial_Task:1"};
	this.sidHashMap["Factorial_Task:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "Factorial_Task:8"};
	this.sidHashMap["Factorial_Task:8"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Factorial_Task:9"};
	this.sidHashMap["Factorial_Task:9"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "Factorial_Task:5"};
	this.sidHashMap["Factorial_Task:5"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>:3"] = {sid: "Factorial_Task:1:3"};
	this.sidHashMap["Factorial_Task:1:3"] = {rtwname: "<S1>:3"};
	this.rtwnameHashMap["<S1>:4"] = {sid: "Factorial_Task:1:4"};
	this.sidHashMap["Factorial_Task:1:4"] = {rtwname: "<S1>:4"};
	this.rtwnameHashMap["<S1>:5"] = {sid: "Factorial_Task:1:5"};
	this.sidHashMap["Factorial_Task:1:5"] = {rtwname: "<S1>:5"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "Factorial_Task:1:6"};
	this.sidHashMap["Factorial_Task:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "Factorial_Task:1:7"};
	this.sidHashMap["Factorial_Task:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "Factorial_Task:1:8"};
	this.sidHashMap["Factorial_Task:1:8"] = {rtwname: "<S1>:8"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
