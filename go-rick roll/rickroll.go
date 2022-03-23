package main

import (
	"os/exec"
	"runtime"
)

func main() {
	var command *exec.Cmd
	if runtime.GOOS != "windows" {
		command = exec.Command("/bin/sh", "-c", "start", "https://www.youtube.com/watch?v=dQw4w9WgXcQ")
	} else {
		command = exec.Command("start https://www.youtube.com/watch?v=dQw4w9WgXcQ")
	}

	command.Run()
}
