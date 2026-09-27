/* PS4 Firmware 13.52 syscall table (partial)
 * Confirmed: sys_mdbg_call = 573
 * The kernel implements this as `mdbg_call` which dispatches to a
 * command handler via the control buffer at rdi.
 */
#ifndef SYSCALLS_1352_H
#define SYSCALLS_1352_H

#define SYS_syscall            0
#define SYS_exit               1
#define SYS_fork               2
#define SYS_read               3
#define SYS_write              4
#define SYS_open               5
#define SYS_close              6
/* ... */
#define SYS_mdbg_call          573     /* debugger backdoor */

#endif /* SYSCALLS_1352_H */
